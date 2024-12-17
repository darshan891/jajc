<!DOCTYPE html>
<html lang="en">
<head>
  <title>Table</title>
  <style>
    table, th, tr, td {
      border: solid;
    }
  </style>
</head>
<body>
  <table>
    <tr>
      <th>Column1</th>
      <th>Column2</th>
      <th>Column3</th>
    </tr>
    <tr>
      <td rowspan="2">Row1 Cell1</td>
      <td>Row1 Cell2</td>
      <td>Row1 Cell3</td>
    </tr>
    <tr>
      <td>Row2 Cell2</td>
      <td>Row2 Cell3</td>
    </tr>
    <tr>
      <td colspan="3">Row 3 Cell 1</td>
    </tr>
  </table>
</body>
</html>
